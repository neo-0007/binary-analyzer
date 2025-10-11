
bool FUN_004730c0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  
  lVar2 = thunk_FUN_0041cdd0(param_2,"group");
  if (lVar2 == 0) {
LAB_00473142:
    lVar2 = thunk_FUN_0041cdd0(param_2,"properties");
    bVar4 = true;
    if ((lVar2 != 0) && (bVar4 = false, *(int *)(lVar2 + 8) == 4)) {
      FUN_0041ad60(*(undefined8 *)(param_1 + 8),"../providers/implementations/keymgmt/ecx_kmgmt.c",
                   0x22c);
      lVar2 = FUN_0041c2c0(*(undefined8 *)(lVar2 + 0x10),
                           "../providers/implementations/keymgmt/ecx_kmgmt.c",0x22d);
      bVar4 = lVar2 != 0;
      *(long *)(param_1 + 8) = lVar2;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar1 = *(int *)(lVar2 + 8);
      pcVar3 = "x25519";
joined_r0x004731b3:
      if ((iVar1 == 4) && (iVar1 = FUN_0041c9c0(*(undefined8 *)(lVar2 + 0x10),pcVar3), iVar1 == 0))
      goto LAB_00473142;
    }
    else if (*(int *)(param_1 + 0x10) == 1) {
      iVar1 = *(int *)(lVar2 + 8);
      pcVar3 = "x448";
      goto joined_r0x004731b3;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/keymgmt/ecx_kmgmt.c",0x224,"ecx_gen_set_params");
    FUN_0051f8f0(0x39,0x80106,0);
    bVar4 = false;
  }
  return bVar4;
}

