<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Model;

class Kehadiran extends Model
{
    protected $connection = 'mysql';
    protected $table = 'kehadirans';

    protected $fillable = [
        'nama', 'nim', 'kelas', 'keterangan', 'tanggal_pertemuan', 'status'
    ];
    
}
