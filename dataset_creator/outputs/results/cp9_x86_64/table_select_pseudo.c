
void table_select(undefined1 (*param_1) [16],int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  int aiStack_48 [10];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[2] + 8) = (undefined1  [16])0x0;
  *(undefined8 *)param_1[2] = 0;
  *(undefined4 *)*param_1 = 1;
  uVar1 = param_3 + ((int)(char)param_3 >> 0x1f & param_3) * -2;
  *(undefined8 *)(param_1[4] + 8) = 0;
  param_1[1] = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[3] + 8) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1[2] + 8) = 1;
  *(undefined8 *)param_1[7] = 0;
  lVar3 = (long)param_2 * 0x3c0;
  param_1[5] = (undefined1  [16])0x0;
  param_1[6] = (undefined1  [16])0x0;
  cmov(param_1,k25519Precomp + lVar3,((uVar1 ^ 1) & 0xff) - 1 >> 0x1f);
  cmov(param_1,lVar3 + 0x7e68b8,((uVar1 ^ 2) & 0xff) - 1 >> 0x1f);
  cmov(param_1,lVar3 + 0x7e6930,((uVar1 ^ 3) & 0xff) - 1 >> 0x1f);
  cmov(param_1,lVar3 + 0x7e69a8,((uVar1 ^ 4) & 0xff) - 1 >> 0x1f);
  cmov(param_1,lVar3 + 0x7e6a20,((uVar1 ^ 5) & 0xff) - 1 >> 0x1f);
  cmov(param_1,lVar3 + 0x7e6a98,((uVar1 ^ 6) & 0xff) - 1 >> 0x1f);
  uVar2 = uVar1 ^ 8;
  cmov(param_1,lVar3 + 0x7e6b10,((uVar1 ^ 7) & 0xff) - 1 >> 0x1f);
  cmov(param_1,lVar3 + 0x7e6b88,(uVar2 & 0xff) - 1 >> 0x1f);
  local_78 = *(undefined8 *)(param_1[4] + 8);
  local_98 = *(undefined8 *)(param_1[2] + 8);
  uStack_90 = *(undefined8 *)param_1[3];
  local_88 = *(undefined8 *)(param_1[3] + 8);
  uStack_80 = *(undefined8 *)param_1[4];
  local_70 = *(undefined8 *)*param_1;
  uStack_68 = *(undefined8 *)(*param_1 + 8);
  local_60 = *(undefined8 *)param_1[1];
  uStack_58 = *(undefined8 *)(param_1[1] + 8);
  local_50 = *(undefined8 *)param_1[2];
  lVar3 = 0x50;
  do {
    *(int *)((long)&local_98 + lVar3) = -*(int *)(*param_1 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x78);
  cmov(param_1,&local_98,(uint)(int)(char)param_3 >> 0x1f);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

