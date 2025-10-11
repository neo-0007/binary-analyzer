
void FUN_006c2270(long param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  uint *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 < 0x32) {
    bVar2 = true;
    bVar3 = true;
    if ((0xfffdffffffffffbcU >> ((ulong)*param_3 & 0x3f) & 1) != 0) goto LAB_006c2297;
    uVar4 = param_3[1];
    if ((int)uVar4 < 2) goto LAB_006c22cf;
LAB_006c2386:
    *(undefined4 *)(param_1 + 0x130) = 1;
    if (bVar3) goto LAB_006c2395;
  }
  else {
LAB_006c2297:
    lVar5 = *(long *)(param_1 + 0x100);
    if (lVar5 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar6 = 1;
      lVar5 = 0;
    }
    else {
      lVar6 = lVar5 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar6;
    bVar2 = false;
    *(undefined1 *)(param_1 + lVar5) = 0x28;
    *(undefined1 *)(param_1 + 0x108) = 0x28;
    uVar4 = param_3[1];
    bVar3 = false;
    if (1 < (int)uVar4) goto LAB_006c2386;
LAB_006c22cf:
    iVar1 = *(int *)(param_1 + 0x134);
    bVar3 = bVar2;
    if (0x400 < iVar1) goto LAB_006c2386;
    param_3[1] = uVar4 + 1;
    local_30 = *(undefined8 *)(param_1 + 0x148);
    *(int *)(param_1 + 0x134) = iVar1 + 1;
    *(uint ***)(param_1 + 0x148) = &local_38;
    local_38 = param_3;
    FUN_006bc890(param_1,0x11,param_3);
    *(undefined8 *)(param_1 + 0x148) = local_30;
    param_3[1] = param_3[1] - 1;
    *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + -1;
    if (bVar2) goto LAB_006c2395;
  }
  lVar5 = *(long *)(param_1 + 0x100);
  if (lVar5 == 0xff) {
    *(undefined1 *)(param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
    lVar6 = 1;
    lVar5 = 0;
  }
  else {
    lVar6 = lVar5 + 1;
  }
  *(long *)(param_1 + 0x100) = lVar6;
  *(undefined1 *)(param_1 + lVar5) = 0x29;
  *(undefined1 *)(param_1 + 0x108) = 0x29;
LAB_006c2395:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

