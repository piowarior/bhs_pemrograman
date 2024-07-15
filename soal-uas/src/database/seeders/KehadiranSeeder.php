<?php

namespace Database\Seeders;

use Illuminate\Database\Console\Seeds\WithoutModelEvents;
use Illuminate\Database\Seeder;
use Illuminate\Support\Facades\DB;
use Carbon\Carbon;

class KehadiranSeeder extends Seeder
{
    /**
     * Run the database seeds.
     */
    public function run(): void
    {
        $timestamp = Carbon::now()->toDateTimeString();
        DB::table('kehadirans')->insert([
            'nama' => 'skibidi',
            'nim' => '20230801270',
            'kelas' => '202',
            'keterangan' => 'Hadir di kelas',
            'tanggal_pertemuan' => Carbon::now()->format('Y-m-d'),
            'status' => 'hadir',
            'created_at' => $timestamp,
            'updated_at' => $timestamp,
        ]);
    }
}

