
undefined8 FUN_0044ff60(undefined1 *param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  puVar2 = local_78;
  puVar3 = local_78;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  iVar4 = (int)(*(ulong *)(param_2 + 0xe8) + 7 >> 3);
  if ((*(ulong *)(param_2 + 0xe8) & 7) == 0) {
    *(undefined8 *)(param_2 + 0x50) = 0xffffffffffffffff;
    thunk_FUN_00713720(*(long *)(param_2 + 0xe0) + param_2 + 0x60,0,0x80 - *(long *)(param_2 + 0xe0)
                      );
    FUN_0044e440(param_2,param_2 + 0x60,*(undefined8 *)(param_2 + 0xe0));
    puVar2 = param_1;
    if (iVar4 < 1) goto LAB_00450025;
LAB_0044fffa:
    lVar1 = 0;
    do {
      *(undefined8 *)(puVar2 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
      lVar1 = lVar1 + 1;
    } while ((int)lVar1 < iVar4);
    puVar3 = puVar2;
    if (param_1 == puVar2) goto LAB_00450025;
  }
  else {
    *(undefined8 *)(param_2 + 0x50) = 0xffffffffffffffff;
    thunk_FUN_00713720(*(long *)(param_2 + 0xe0) + param_2 + 0x60,0,0x80 - *(long *)(param_2 + 0xe0)
                      );
    FUN_0044e440(param_2,param_2 + 0x60,*(undefined8 *)(param_2 + 0xe0));
    if (0 < iVar4) goto LAB_0044fffa;
  }
  thunk_FUN_00713a50(param_1,puVar3,*(undefined8 *)(param_2 + 0xe8));
LAB_00450025:
  FUN_004227b0(param_2,0xf0);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return 1;
}

