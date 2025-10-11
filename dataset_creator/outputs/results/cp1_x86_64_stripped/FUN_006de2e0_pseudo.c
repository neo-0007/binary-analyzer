
undefined8 * FUN_006de2e0(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined8 local_30;
  
  local_30 = param_1;
  plVar2 = (long *)FUN_0076f840(&local_30,&DAT_00946108,FUN_006de250);
  uVar4 = local_30;
  if (plVar2 == (long *)0x0) {
    lVar3 = thunk_FUN_007129d0(local_30);
    puVar6 = (undefined8 *)FUN_007101b0(lVar3 + 0x31);
    if (puVar6 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar4 = thunk_FUN_00713a50(puVar6 + 6,uVar4,lVar3 + 1);
    *puVar6 = uVar4;
    *(undefined4 *)(puVar6 + 1) = 0xfffffffd;
    puVar6[2] = 0;
    lVar3 = FUN_0076f440(puVar6,&DAT_00946108,FUN_006de250);
    if (lVar3 == 0) {
      FUN_007104f0(puVar6);
      return (undefined8 *)0x0;
    }
  }
  else {
    puVar6 = (undefined8 *)*plVar2;
    if (puVar6 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  iVar1 = *(int *)(puVar6 + 1);
  if (-3 < iVar1) {
    if (puVar6[2] != 0) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      *(int *)(puVar6 + 1) = iVar1 + 1;
      return puVar6;
    }
    return puVar6;
  }
  if (puVar6[2] == 0) {
    lVar3 = FUN_0078dfa0(*puVar6,0x80000002);
    puVar6[2] = lVar3;
    if (lVar3 == 0) {
      return (undefined8 *)0x0;
    }
    lVar3 = FUN_0078e120(lVar3,"gconv");
    puVar6[3] = lVar3;
    if (lVar3 == 0) {
      FUN_0076ffd0(DAT_00946108,FUN_006de260,puVar6);
      return (undefined8 *)0x0;
    }
    uVar4 = FUN_0078e120(puVar6[2],"gconv_init");
    puVar6[4] = uVar4;
    uVar5 = FUN_0078e120(puVar6[2],"gconv_end");
    *(undefined4 *)(puVar6 + 1) = 1;
    uVar7 = puVar6[3] ^ *(ulong *)(in_FS_OFFSET + 0x30);
    uVar5 = uVar5 ^ *(ulong *)(in_FS_OFFSET + 0x30);
    puVar6[3] = uVar7 << 0x11 | uVar7 >> 0x2f;
    puVar6[5] = uVar5 << 0x11 | uVar5 >> 0x2f;
    uVar5 = puVar6[4] ^ *(ulong *)(in_FS_OFFSET + 0x30);
    puVar6[4] = uVar5 << 0x11 | uVar5 >> 0x2f;
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006e2220("found->handle == NULL","gconv_dl.c",0x71,"__gconv_find_shlib");
}

