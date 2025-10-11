
undefined8 des_ede_init_key(undefined8 param_1,const_DES_cblock *param_2)

{
  _union_772 _Var1;
  _union_772 _Var2;
  _union_772 _Var3;
  _union_772 _Var4;
  _union_772 _Var5;
  _union_772 _Var6;
  _union_772 _Var7;
  _union_772 _Var8;
  _union_772 _Var9;
  _union_772 _Var10;
  _union_772 _Var11;
  _union_772 _Var12;
  _union_772 _Var13;
  _union_772 _Var14;
  DES_key_schedule *schedule;
  
  schedule = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data();
  schedule[3].ks[0] = (_union_772)0x0;
  DES_set_key_unchecked(param_2,schedule);
  DES_set_key_unchecked(param_2 + 1,schedule + 1);
  _Var1 = schedule->ks[1];
  _Var2 = schedule->ks[2];
  _Var3 = schedule->ks[3];
  _Var4 = schedule->ks[4];
  _Var5 = schedule->ks[5];
  _Var6 = schedule->ks[6];
  _Var7 = schedule->ks[7];
  _Var8 = schedule->ks[8];
  _Var9 = schedule->ks[9];
  _Var10 = schedule->ks[10];
  _Var11 = schedule->ks[0xb];
  schedule[2].ks[0] = schedule->ks[0];
  schedule[2].ks[1] = _Var1;
  _Var1 = schedule->ks[0xc];
  _Var12 = schedule->ks[0xd];
  _Var13 = schedule->ks[0xe];
  _Var14 = schedule->ks[0xf];
  schedule[2].ks[2] = _Var2;
  schedule[2].ks[3] = _Var3;
  schedule[2].ks[4] = _Var4;
  schedule[2].ks[5] = _Var5;
  schedule[2].ks[6] = _Var6;
  schedule[2].ks[7] = _Var7;
  schedule[2].ks[8] = _Var8;
  schedule[2].ks[9] = _Var9;
  schedule[2].ks[10] = _Var10;
  schedule[2].ks[0xb] = _Var11;
  schedule[2].ks[0xc] = _Var1;
  schedule[2].ks[0xd] = _Var12;
  schedule[2].ks[0xe] = _Var13;
  schedule[2].ks[0xf] = _Var14;
  return 1;
}

