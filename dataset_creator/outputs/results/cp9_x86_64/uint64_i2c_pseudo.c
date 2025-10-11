
undefined8 uint64_i2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)*param_1;
  if ((lVar2 == 0) && ((*(ulong *)(param_4 + 0x28) & 1) != 0)) {
    return 0xffffffff;
  }
  uVar1 = 0;
  if (((*(ulong *)(param_4 + 0x28) & 2) != 0) && (lVar2 < 0)) {
    lVar2 = -lVar2;
    uVar1 = 1;
  }
  uVar1 = ossl_i2c_uint64_int(param_2,lVar2,uVar1);
  return uVar1;
}

