
/* WARNING: Removing unreachable block (ram,0x007c26df) */

uint FUN_007c2630(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int *param_5,
                 int *param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  undefined1 auStack_a8 [4];
  undefined4 local_a4;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  ulong local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  
  puVar8 = auStack_a8;
  puVar6 = auStack_a8;
  local_98 = param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = param_4;
  local_88 = param_3;
  local_80 = param_2;
  iVar1 = FUN_007c3f90();
  if (iVar1 == 0) {
    *param_6 = 1;
    uVar2 = 0;
    puVar6 = auStack_a8;
    goto LAB_007c2689;
  }
  lVar4 = FUN_00778500();
  if (lVar4 == 0) {
    uVar2 = 0xffffffff;
    *param_5 = *(int *)(in_FS_OFFSET + -0x58);
    *param_6 = -1;
    goto LAB_007c2689;
  }
  lVar5 = thunk_FUN_00712710(param_1,0x2e);
  puVar7 = auStack_a8;
  if (lVar5 == 0) {
    for (; puVar8 != auStack_a8; puVar8 = puVar8 + -0x1000) {
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    }
    *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    *(undefined8 *)(puVar8 + -0x418) = 0x7c29a9;
    lVar5 = FUN_007c43c0(lVar4,param_1,(ulong)(puVar8 + -0x401) & 0xfffffffffffffff0,0x401);
    puVar7 = puVar8 + -0x410;
    if (lVar5 != 0) {
      puVar7 = puVar8 + -0x410;
      param_1 = lVar5;
    }
  }
  *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
  local_60 = 0;
  local_a0 = (ulong)(puVar7 + -0x801) & 0xfffffffffffffff0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_a4 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  *(int **)(puVar7 + -0x820) = &local_70;
  *(int **)(puVar7 + -0x828) = &local_74;
  *(undefined4 **)(puVar7 + -0x830) = &local_78;
  *(long **)(puVar7 + -0x838) = &local_60;
  *(ulong **)(puVar7 + -0x840) = &local_68;
  *(undefined8 *)(puVar7 + -0x848) = 0x7c2781;
  local_68 = local_a0;
  uVar2 = FUN_007c4ed0(lVar4,param_1,1,0x1a395100,local_a0,0x800);
  if ((int)uVar2 < 0) {
    iVar1 = *(int *)(in_FS_OFFSET + -0x58);
    if (iVar1 < 0x19) {
      if (iVar1 < 0x17) {
        uVar2 = 0;
        if (iVar1 != 3) goto LAB_007c2809;
        uVar2 = 0xfffffffe;
        *(undefined4 *)(in_FS_OFFSET + -0x18) = 2;
        *param_6 = 2;
        goto LAB_007c27cb;
      }
      uVar2 = 0xffffffff;
      *(undefined4 *)(in_FS_OFFSET + -0x18) = 0xffffffff;
      *param_6 = -1;
    }
    else {
      uVar2 = -(uint)(iVar1 - 0x6eU < 2);
LAB_007c2809:
      iVar1 = *(int *)(in_FS_OFFSET + -0x18);
      *param_6 = iVar1;
      if (iVar1 == 2) {
LAB_007c27cb:
        *param_5 = 0xb;
        goto joined_r0x007c27d8;
      }
    }
    *(undefined4 *)(in_FS_OFFSET + -0x58) = local_a4;
  }
  else {
    local_6c = 1;
    local_58 = local_80;
    local_50 = local_88;
    local_48 = local_90;
    lVar5 = local_60;
    iVar1 = local_74;
    if (uVar2 == 0) {
LAB_007c2874:
      if ((lVar5 != 0) && (0 < iVar1)) {
        *(undefined4 **)(puVar7 + -0x820) = &local_6c;
        *(undefined8 *)(puVar7 + -0x828) = local_98;
        *(int **)(puVar7 + -0x830) = param_6;
        *(undefined8 *)(puVar7 + -0x838) = 0x7c28b0;
        uVar3 = FUN_007c0b70(lVar5,iVar1,&local_58,&local_50,&local_48,param_5);
        if (uVar2 != 1) {
          if (uVar3 != 0) {
            uVar2 = uVar3;
          }
          if (uVar2 != 1) goto joined_r0x007c27d8;
        }
        if (((uVar3 == 0xfffffffe) && (*param_5 == 0x22)) && (*param_6 != 3)) goto LAB_007c2974;
      }
    }
    else {
      *(undefined4 **)(puVar7 + -0x820) = &local_6c;
      *(undefined8 *)(puVar7 + -0x828) = local_98;
      *(int **)(puVar7 + -0x830) = param_6;
      local_88 = local_60;
      local_80 = CONCAT44(local_80._4_4_,local_74);
      *(undefined8 *)(puVar7 + -0x838) = 0x7c293f;
      uVar2 = FUN_007c0b70(local_68,uVar2,&local_58,&local_50,&local_48,param_5);
      lVar5 = local_88;
      iVar1 = (int)local_80;
      if (uVar2 < 2) goto LAB_007c2874;
      if (uVar2 != 0xfffffffe) goto joined_r0x007c27d8;
      if ((*param_5 != 0x22) || (*param_6 == 3)) goto LAB_007c2874;
LAB_007c2974:
      uVar2 = 0xfffffffe;
    }
  }
joined_r0x007c27d8:
  if (local_70 != 0) {
    *(undefined8 *)(puVar7 + -0x818) = 0x7c2834;
    FUN_007104f0(local_60);
  }
  puVar6 = puVar7 + -0x810;
  if (local_68 != local_a0) {
    *(undefined8 *)(puVar7 + -0x818) = 0x7c27ec;
    FUN_007104f0();
  }
  *(undefined8 *)(puVar7 + -0x818) = 0x7c27f4;
  FUN_00778a10(lVar4);
LAB_007c2689:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar6 + -8) = &UNK_007c29fb;
    FUN_00771f60();
  }
  return uVar2;
}

