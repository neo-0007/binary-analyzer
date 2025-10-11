
undefined8 FUN_00451620(undefined1 *param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  puVar2 = local_58;
  puVar3 = local_58;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  iVar4 = (int)(*(ulong *)(param_2 + 0x78) + 3 >> 2);
  if ((*(ulong *)(param_2 + 0x78) & 3) == 0) {
    *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
    thunk_FUN_00713720(*(long *)(param_2 + 0x70) + param_2 + 0x30,0,0x40 - *(long *)(param_2 + 0x70)
                      );
    FUN_004500b0(param_2,param_2 + 0x30,*(undefined8 *)(param_2 + 0x70));
    puVar2 = param_1;
    if (iVar4 < 1) goto LAB_004516c8;
LAB_004516a3:
    lVar1 = 0;
    do {
      *(undefined4 *)(puVar2 + lVar1 * 4) = *(undefined4 *)(param_2 + lVar1 * 4);
      lVar1 = lVar1 + 1;
    } while ((int)lVar1 < iVar4);
    puVar3 = puVar2;
    if (param_1 == puVar2) goto LAB_004516c8;
  }
  else {
    *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
    thunk_FUN_00713720(*(long *)(param_2 + 0x70) + param_2 + 0x30,0,0x40 - *(long *)(param_2 + 0x70)
                      );
    FUN_004500b0(param_2,param_2 + 0x30,*(undefined8 *)(param_2 + 0x70));
    if (0 < iVar4) goto LAB_004516a3;
  }
  thunk_FUN_00713a50(param_1,puVar3,*(undefined8 *)(param_2 + 0x78));
LAB_004516c8:
  FUN_004227b0(param_2,0x80);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return 1;
}

