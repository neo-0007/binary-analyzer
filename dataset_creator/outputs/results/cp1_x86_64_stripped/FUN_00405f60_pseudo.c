
undefined8 FUN_00405f60(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 == 0) {
    return 1;
  }
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    if ((((iVar1 - 0x40U & 0xffffffbf) == 0 || (iVar1 - 0x10U & 0xffffffef) == 0) ||
        (iVar1 == 0x100)) && (*(long *)(piVar2 + 0xc) != 0)) {
      if (iVar1 == 0x80) {
        uVar4 = FUN_0040cb40();
        return uVar4;
      }
      if (iVar1 == 0x100) {
        uVar4 = FUN_0040cc20();
        return uVar4;
      }
      FUN_0051f420();
      uVar4 = 0x18b;
      goto LAB_00405fd5;
    }
  }
  lVar3 = *(long *)(param_1 + 8);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x70) == 0)) || ((*(byte *)(param_1 + 0x19) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00406038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_1 + 0x30))();
    return uVar4;
  }
  if (*(code **)(lVar3 + 0x98) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040602a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(lVar3 + 0x98))(*(undefined8 *)(param_1 + 0x38));
    return uVar4;
  }
  FUN_0051f420();
  uVar4 = 0x195;
LAB_00405fd5:
  FUN_0051f540("../crypto/evp/digest.c",uVar4,"EVP_DigestUpdate");
  FUN_0051f8f0(6,0xbd,0);
  return 0;
}

