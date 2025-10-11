
bool rinf_cb(int param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 1) {
    return true;
  }
  lVar1 = *param_2;
  lVar2 = OPENSSL_sk_new_null();
  *(long *)(lVar1 + 0x30) = lVar2;
  return lVar2 != 0;
}

