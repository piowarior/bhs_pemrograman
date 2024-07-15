<?php

namespace App\Http\Controllers;

use App\Models\Product;
use Illuminate\Http\Request;
use Illuminate\Support\Facades\DB;


class ProductController extends Controller
{
    /**
     * Display a listing of the resource.
     *
     * @return \Illuminate\Http\Response
     */
    public function index()
    {
        $data = DB::connection('mysql')->table('products')->get();
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
            'name' => 'required|string'
        ]);

        $product = [
            'name' => $request->input('name'),
            'created_at' => \Carbon\Carbon::now()-> toDateTimeString(),
            'updated_at' => \Carbon\Carbon::now()-> toDateTimeString(),
        ];

        $id = DB::connection('mysql')->table('products')->insertGetId($product);
        $data = DB::connection('mysql')->table('products')->where('id', $id)->first();

        $response = [
            'success' => 'true',
            'massage' => 'product created',
            'data' => $product,
        ];

        return response()->json($response, 201);

    }

    /**
     * Display the specified resource.
     *
     * @param  \App\Models\Product  $product
     * @return \Illuminate\Http\Response
     */
    public function show(Product $product)
    {
        //
    }

    /**
     * Show the form for editing the specified resource.
     *
     * @param  \App\Models\Product  $product
     * @return \Illuminate\Http\Response
     */
    public function edit(Request $request, $id)
    {

        $this->validate($request,
        [
            'name' =>'required'

        ]);
        $data = Product::find($id);
        if($data){
        $data = new Product();
        $data -> name = $request->input('name');
        $data ->save();

            
                return response ()->json([
                    'succes' => true,
                    'message' => 'berhasil di update',
                    'data' => $data

                ]);


            }else {
                return response ()->json([
                    'succes' => true,
                    'message' => 'Erorr data',
                ]);
            }
    }

    /**
     * Update the specified resource in storage.
     *
     * @param  \Illuminate\Http\Request  $request
     * @param  \App\Models\Product  $product
     * @return \Illuminate\Http\Response
     */
    public function update(Request $request, Product $product)
    {
        // $data = Product::find($id);
        //     if($data){

        //         $data->delete();
        //         return response ()->json([
        //             'succes' => true,
        //             'message' => 'berhasil di hapus',
        //             'data' => $data

        //         ]);


        //     }else {
        //         return response ()->json([
        //             'succes' => false,
        //             'message' => 'Parametter Not Found',
        //         ]);
        //     }
    }

    /**
     * Remove the specified resource from storage.
     *
     * @param  \App\Models\Product  $product
     * @return \Illuminate\Http\Response
     */
    public function destroy($id)
    {
            $data = Product::find($id);
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
