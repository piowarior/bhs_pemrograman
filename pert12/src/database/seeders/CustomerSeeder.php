<?php

namespace Database\Seeders;

use Illuminate\Database\Console\Seeds\WithoutModelEvents;
use Illuminate\Database\Seeder;
use Illuminate\Support\Facades\DB;

class CustomerSeeder extends Seeder
{
    /**
     * Run the database seeds.
     */
   
        public function run(): void{$timestamp = \Carbon\Carbon::now()->toDateTimeString();

            DB::table('customers')->insert([
                'name' => 'nama',
                'email' => 'john.doe@example.com',
                'nama_produk' => 'Produk A',
                'created_at' => $timestamp,
                'updated_at' => $timestamp
            ]);
        }
    
}
