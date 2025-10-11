
bool FUN_004751f0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = thunk_FUN_0041cdd0(param_2,"bits");
  if (lVar2 == 0) {
LAB_0047522f:
    lVar2 = thunk_FUN_0041cdd0(param_2,"primes");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d830(lVar2,param_1 + 5);
      if (iVar1 == 0) goto LAB_004752c0;
    }
    lVar2 = thunk_FUN_0041cdd0(param_2,&DAT_007d4faa);
    if (lVar2 != 0) {
      iVar1 = FUN_0041dc20(lVar2,param_1 + 4);
      if (iVar1 == 0) goto LAB_004752c0;
    }
    if (*(int *)(param_1 + 2) != 0x1000) {
      return true;
    }
    iVar1 = FUN_0042aaa0(param_1 + 6,(long)param_1 + 0x44,param_2,*param_1);
    bVar3 = iVar1 != 0;
  }
  else {
    iVar1 = thunk_FUN_0041d830(lVar2,param_1 + 3);
    if (iVar1 != 0) {
      if (0x1ff < (ulong)param_1[3]) goto LAB_0047522f;
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/keymgmt/rsa_kmgmt.c",0x202,"rsa_gen_set_params");
      FUN_0051f8f0(0x39,0xab,0);
    }
LAB_004752c0:
    bVar3 = false;
  }
  return bVar3;
}

