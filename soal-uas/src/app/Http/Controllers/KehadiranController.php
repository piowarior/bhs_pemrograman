<?php

namespace App\Http\Controllers;

use App\Models\Kehadiran;
use Illuminate\Http\Request;
use Illuminate\Support\Facades\DB;

class KehadiranController extends Controller
{
    public function index()
    {
        $query = DB::connection('mysql')->table('kehadirans')->get();
        return response()->json($query, 200);
    }

    public function store(Request $request)
    {
        $this->validate($request, [
            'nama' => 'required|string',
            'nim' => 'required|string',
            'kelas' => 'required|string',
            'keterangan' => 'nullable|string',
            'tanggal_pertemuan' => 'required|date',
            'status' => 'required|in:hadir,absen,izin'
        ]);

        $kehadiran = Kehadiran::create($request->all());

        return response()->json([
            'success' => true,
            'message' => 'Kehadiran created',
            'data' => $kehadiran,
        ], 201);
    }

    public function show($id)
    {
        $kehadiran = Kehadiran::find($id);

        if ($kehadiran) {
            return response()->json($kehadiran, 200);
        } else {
            return response()->json(['message' => 'Data not found'], 404);
        }
    }

    public function update(Request $request, $id)
    {
        $kehadiran = Kehadiran::find($id);

        if ($kehadiran) {
            $kehadiran->update($request->all());
            return response()->json([
                'success' => true,
                'message' => 'Kehadiran updated',
                'data' => $kehadiran,
            ], 200);
        } else {
            return response()->json(['message' => 'Data not found'], 404);
        }
    }

    public function destroy($id)
    {
        $kehadiran = Kehadiran::find($id);

        if ($kehadiran) {
            $kehadiran->delete();
            return response()->json([
                'success' => true,
                'message' => 'Kehadiran deleted',
                'data' => $kehadiran,
            ], 200);
        } else {
            return response()->json(['message' => 'Data not found'], 404);
        }
    }
}
