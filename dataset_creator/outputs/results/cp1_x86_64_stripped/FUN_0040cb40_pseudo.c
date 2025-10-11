
undefined8 FUN_0040cb40(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined8 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    if (((*piVar1 == 0x80) && (*(long *)(piVar1 + 0xc) != 0)) && (*(long *)(piVar1 + 10) != 0)) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(piVar1 + 10) + 0x70);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/m_sigver.c",0x1a2,"EVP_DigestSignUpdate");
        FUN_0051f8f0(6,0xc0101,0);
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x0040cb86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)();
      return uVar3;
    }
    if (((*(byte *)(piVar1 + 0x28) & 1) != 0) &&
       (iVar2 = (**(code **)(*(long *)(piVar1 + 0x1e) + 0xf8))(piVar1,param_1), iVar2 == 0)) {
      return 0;
    }
    *(byte *)(piVar1 + 0x28) = *(byte *)(piVar1 + 0x28) & 0xfe;
  }
  uVar3 = FUN_00405f60(param_1,param_2,param_3);
  return uVar3;
}

