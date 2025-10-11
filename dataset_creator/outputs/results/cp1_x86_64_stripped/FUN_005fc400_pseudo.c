
bool FUN_005fc400(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_004ab640();
    if (lVar1 != 0) {
      FUN_00537b70(*(undefined8 *)(lVar1 + 0x18));
      FUN_0041aef0(lVar1,0x1150,"../crypto/evp/bio_enc.c",99);
      FUN_004ab630(param_1,0);
      FUN_004ab650(param_1,0);
    }
    return lVar1 != 0;
  }
  return false;
}

