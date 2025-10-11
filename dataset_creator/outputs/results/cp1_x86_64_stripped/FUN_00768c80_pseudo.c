
ulong FUN_00768c80(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  char *pcVar12;
  long in_FS_OFFSET;
  undefined1 local_d8 [152];
  long local_40;
  undefined1 *puVar11;
  
  lVar9 = 0x10;
  puVar11 = local_d8;
  puVar10 = local_d8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  pcVar5 = (char *)FUN_006e8f20("GETCONF_DIR");
  pcVar12 = "/usr/lib/getconf";
  if (pcVar5 != (char *)0x0) {
    lVar9 = thunk_FUN_007129d0(pcVar5);
    pcVar12 = pcVar5;
  }
  lVar6 = thunk_FUN_007129d0(param_1);
  uVar7 = lVar9 + 0x1a + lVar6;
  puVar3 = local_d8;
  while (puVar11 != local_d8 + -(uVar7 & 0xfffffffffffff000)) {
    puVar10 = puVar3 + -0x1000;
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
    puVar11 = puVar3 + -0x1000;
    puVar3 = puVar3 + -0x1000;
  }
  uVar7 = (ulong)((uint)uVar7 & 0xff0);
  lVar2 = -uVar7;
  if (uVar7 != 0) {
    *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
  }
  *(undefined8 *)(puVar10 + lVar2 + -8) = 0x768d33;
  puVar8 = (undefined8 *)thunk_FUN_00713820((long)puVar10 + lVar2,pcVar12,lVar9);
  *puVar8 = 0x565f5849534f502f;
  *(undefined2 *)(puVar8 + 1) = 0x5f36;
  *(undefined8 *)(puVar10 + lVar2 + -8) = 0x768d59;
  thunk_FUN_00713a50((long)puVar8 + 10,param_1,lVar6 + 1);
  *(undefined8 *)(puVar10 + lVar2 + -8) = 0x768d68;
  iVar4 = FUN_0076d7d0((long)puVar10 + lVar2,local_d8);
  *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar10 + lVar2 + -8) = FUN_00768db0;
    FUN_00771f60();
  }
  return (long)iVar4 >> 0x3f | 1;
}

