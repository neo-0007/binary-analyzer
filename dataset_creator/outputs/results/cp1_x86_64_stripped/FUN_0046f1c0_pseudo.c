
ulong FUN_0046f1c0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar3 = thunk_FUN_0041cdd0(param_2,"type");
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 8) != 4) {
LAB_0046f1ea:
      FUN_0051f420();
      uVar5 = 0x217;
      goto LAB_0046f1fb;
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x10);
    iVar2 = *(int *)(param_1 + 0x70);
    iVar1 = thunk_FUN_00712780(uVar5,"default");
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x3c) = (uint)(iVar2 == 0x1000);
    }
    else {
      iVar2 = FUN_00526170(uVar5,iVar2);
      *(int *)(param_1 + 0x3c) = iVar2;
      if (iVar2 == -1) goto LAB_0046f1ea;
    }
  }
  lVar3 = thunk_FUN_0041cdd0(param_2,"group");
  if (lVar3 != 0) {
    if (((*(int *)(lVar3 + 8) == 4) && (*(long *)(lVar3 + 0x10) != 0)) &&
       (lVar3 = FUN_005418d0(), lVar3 != 0)) {
      iVar2 = FUN_00541a20(lVar3);
      *(int *)(param_1 + 0x14) = iVar2;
      if (iVar2 != 0) goto LAB_0046f29e;
    }
    FUN_0051f420();
    uVar5 = 0x224;
LAB_0046f1fb:
    FUN_0051f540("../providers/implementations/keymgmt/dh_kmgmt.c",uVar5,"dh_gen_common_set_params")
    ;
    FUN_0051f8f0(0x39,0x80106,0);
    return 0;
  }
LAB_0046f29e:
  lVar3 = thunk_FUN_0041cdd0(param_2,"pbits");
  if ((lVar3 != 0) && (uVar4 = thunk_FUN_0041d830(lVar3,param_1 + 0x18), (int)uVar4 == 0)) {
    return uVar4;
  }
  lVar3 = thunk_FUN_0041cdd0(param_2,"priv_len");
  if (lVar3 == 0) {
    return 1;
  }
  iVar2 = thunk_FUN_0041cf60(lVar3,param_1 + 0x4c);
  return (ulong)(iVar2 != 0);
}

