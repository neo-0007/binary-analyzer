
undefined8 FUN_00429760(undefined8 param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00428db0();
  if ((lVar1 != 0) && (lVar2 = FUN_00429b00(), lVar1 != lVar2)) {
    if (*(code **)(lVar1 + 8) == (code *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/rand/rand_lib.c",0x149,"RAND_priv_bytes_ex");
      FUN_0051f8f0(0x24,0x65,0);
      return 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x004297a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(lVar1 + 8))(param_2,param_3 & 0xffffffff);
    return uVar3;
  }
  lVar1 = FUN_00429680(param_1);
  if (lVar1 == 0) {
    return 0;
  }
  uVar3 = FUN_0053a6c0(lVar1,param_2,param_3,param_4,0,0,0);
  return uVar3;
}

