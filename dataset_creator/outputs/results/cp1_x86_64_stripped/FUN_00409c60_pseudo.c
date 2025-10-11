
undefined8 FUN_00409c60(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = FUN_00409b90();
  uVar1 = FUN_00409920(param_1);
  if (uVar1 < 0x11) {
    uVar2 = FUN_004a2750(param_2,uVar2,uVar1);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00418e30("assertion failed: j <= sizeof(c->iv)","../crypto/evp/evp_lib.c",0x4a);
}

