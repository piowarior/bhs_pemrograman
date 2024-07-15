<?php

namespace App\Http\Controllers;

use App\Models\Customer;
use Illuminate\Http\Request;
use Illuminate\Support\Facades\DB;


class CustomerController extends Controller
{
    /**
     * Display a listing of the resource.
     *
     * @return \Illuminate\Http\Response
     */
    public function index()
    {
        $data = DB::connection('mysql')->table('customers')->get();
        return response()->json($data,200);
    }

    /**
     * Show the form for creating a new resource.
     *
     * @return \Illuminate\Http\Response
     */
    public function create()
    {
        //
    }

    /**
     * Store a newly created resource in storage.
     *
     * @param  \Illuminate\Http\Request  $request
     * @return \Illuminate\Http\Response
     */

public function store(Request $request)
{
    $this->validate($request, [
        'name' => 'required|string',
        'email' => 'required|string|email|:customers,email',
        'nama_produk' => 'required|string'
    ]);

    $customer = [
        'name' => $request->input('name'),
        'email' => $request->input('email'),
        'nama_produk' => $request->input('nama_produk'),
        'created_at' => \Carbon\Carbon::now()->toDateTimeString(),
        'updated_at' => \Carbon\Carbon::now()->toDateTimeString(),
    ];

    $id = DB::connection('mysql')->table('customers')->insertGetId($customer);
    $data = DB::connection('mysql')->table('customers')->where('id', $id)->first();

    $response = [
        'success' => 'true',
        'message' => 'Customer created',
        'data' => $data,
    ];

    return response()->json($response, 201);
}

    /**
     * Display the specified resource.
     *
     * @param  \App\Models\Customer  $customer
     * @return \Illuminate\Http\Response
     */
    public function show($id)
    {
    $data = Customer::find($id);

    if ($data) {
        return response()->json([
            'success' => true,
            'message' => 'Data reiview',
            'data' => $data
        ]);
    }else{
          return response()->json([
            'success' => false,
            'message' => 'Customer not found'


          ]);

    }
    }

    /**
     * Show the form for editing the specified resource.
     *
     * @param  \App\Models\Customer  $customer
     * @return \Illuminate\Http\Response
     */
    public function edit(Request $request, $id)
    {

        $this->validate($request,
        [
            'name' =>'required'

        ]);
        $data = Customer::find($id);
        if($data){

        $data -> name = $request->input('name');
        $data -> email = $request->input('email');
        $data -> nama_produk = $request->input('nama_produk');
        $data ->save();

            
                return response ()->json([
                    'succes' => true,
                    'message' => 'berhasil di update',
                    'data' => $data,

                ]);


            }else {
                return response ()->json([
                    'succes' => false,
                    'message' => 'Erorr data',
                ]);
            }
    }

    /**
     * Update the specified resource in storage.
     *
     * @param  \Illuminate\Http\Request  $request
     * @param  \App\Models\Customer  $customer
     * @return \Illuminate\Http\Response
     */
    public function update(Request $request, $id)
                                                {
    $customer = Customer::find($id);

    if (!$customer) {
        return response()->json([
            'success' => false,
            'message' => 'Customer not found'
        ], 404);
    }

    $this->validate($request, [
        'name' => 'sometimes|required|string',
        'email' => 'sometimes|required|string|email|unique:customers,email,' . $id,
    ]);

    $customer->name = $request->input('name', $customer->name);
    $customer->email = $request->input('email', $customer->email);
    $customer->updated_at = \Carbon\Carbon::now()->toDateTimeString();
    $customer->save();

    return response()->json([
        'success' => true,
        'message' => 'Customer updated',
        'data' => $customer
    ], 200);
                                                }


    /**
     * Remove the specified resource from storage.
     *
     * @param  \App\Models\Customer  $customer
     * @return \Illuminate\Http\Response
     */
    public function destroy($id)
    {
            $data = Customer::find($id);
            if($data){

                $data->delete();
                return response ()->json([
                    'succes' => true,
                    'message' => 'berhasil di hapus',
                    'data' => $data

                ]);


            }else {
                return response ()->json([
                    'succes' => false,
                    'message' => 'Parametter Not Found',
                ]);
            }
    }
}
