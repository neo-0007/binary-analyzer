
undefined8 FUN_00541530(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  if (param_1 == 0) goto LAB_005415c4;
  lVar2 = thunk_FUN_0041cdd0(param_2,"group");
  if (lVar2 == 0) {
LAB_00541612:
    lVar2 = thunk_FUN_0041cdd0(param_2,"p");
    lVar3 = thunk_FUN_0041cdd0(param_2,"g");
    lVar4 = thunk_FUN_0041cdd0(param_2,"q");
    if (lVar2 != 0) {
      iVar1 = FUN_0041dc20(lVar2,&local_50);
      if (iVar1 == 0) goto LAB_0054159a;
    }
    if (lVar4 != 0) {
      iVar1 = FUN_0041dc20(lVar4,&local_48);
      if (iVar1 == 0) goto LAB_0054159a;
    }
    if (lVar3 != 0) {
      iVar1 = FUN_0041dc20(lVar3,&local_40);
      if (iVar1 == 0) goto LAB_0054159a;
    }
    lVar2 = thunk_FUN_0041cdd0(param_2,"gindex");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041cf60(lVar2,&local_54);
      if (iVar1 == 0) goto LAB_0054159a;
      *(undefined4 *)(param_1 + 0x38) = local_54;
    }
    lVar2 = thunk_FUN_0041cdd0(param_2,"pcounter");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041cf60(lVar2,&local_54);
      if (iVar1 == 0) goto LAB_0054159a;
      *(undefined4 *)(param_1 + 0x30) = local_54;
    }
    lVar2 = thunk_FUN_0041cdd0(param_2,&DAT_007e6186);
    if (lVar2 != 0) {
      iVar1 = FUN_0041dc20(lVar2,&local_38);
      if (iVar1 == 0) goto LAB_0054159a;
    }
    lVar2 = thunk_FUN_0041cdd0(param_2,"hindex");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041cf60(lVar2,&local_54);
      if (iVar1 == 0) goto LAB_0054159a;
      *(undefined4 *)(param_1 + 0x3c) = local_54;
    }
    lVar2 = thunk_FUN_0041cdd0(param_2,"seed");
    if (lVar2 == 0) {
LAB_0054178b:
      lVar2 = thunk_FUN_0041cdd0(param_2,"validate-pq");
      if (lVar2 != 0) {
        iVar1 = thunk_FUN_0041cf60(lVar2,&local_54);
        if (iVar1 == 0) goto LAB_0054159a;
        FUN_00542170(param_1,1,local_54);
      }
      lVar2 = thunk_FUN_0041cdd0(param_2,"validate-g");
      if (lVar2 != 0) {
        iVar1 = thunk_FUN_0041cf60(lVar2,&local_54);
        if (iVar1 == 0) goto LAB_0054159a;
        FUN_00542170(param_1,2,local_54);
      }
      lVar2 = thunk_FUN_0041cdd0(param_2,"validate-legacy");
      if (lVar2 != 0) {
        iVar1 = thunk_FUN_0041cf60(lVar2,&local_54);
        if (iVar1 == 0) goto LAB_0054159a;
        FUN_00542170(param_1,4,local_54);
      }
      lVar2 = thunk_FUN_0041cdd0(param_2,"digest");
      if (lVar2 == 0) {
LAB_0054188e:
        FUN_00541fa0(param_1,local_50,local_48,local_40);
        FUN_00542040(param_1,local_38);
        uVar5 = 1;
        goto LAB_005415c4;
      }
      if (*(int *)(lVar2 + 8) == 4) {
        lVar3 = thunk_FUN_0041cdd0(param_2,"properties");
        if ((lVar3 == 0) || (*(int *)(lVar3 + 8) == 4)) {
          iVar1 = FUN_00542190(param_1,*(undefined8 *)(lVar2 + 0x10),0);
          if (iVar1 != 0) goto LAB_0054188e;
        }
      }
    }
    else if (*(int *)(lVar2 + 8) == 5) {
      iVar1 = FUN_00542070(param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
      if (iVar1 != 0) goto LAB_0054178b;
    }
  }
  else if ((*(int *)(lVar2 + 8) == 4) && (*(long *)(lVar2 + 0x10) != 0)) {
    lVar2 = FUN_005418d0();
    if (lVar2 != 0) {
      iVar1 = FUN_00541aa0(param_1,lVar2);
      if (iVar1 != 0) goto LAB_00541612;
    }
  }
LAB_0054159a:
  FUN_004b7fa0(local_38);
  FUN_004b7fa0(local_50);
  FUN_004b7fa0(local_48);
  FUN_004b7fa0(local_40);
  uVar5 = 0;
LAB_005415c4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

