
void FUN_004f9630(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte bVar8;
  long in_FS_OFFSET;
  undefined1 local_38 [7];
  undefined1 local_31 [7];
  undefined1 local_2a [7];
  undefined1 local_23 [19];
  long local_10;
  
  bVar8 = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  puVar6 = local_38;
  do {
    puVar7 = puVar6 + 1;
    *puVar6 = (char)(uVar1 >> (bVar8 & 0x3f));
    puVar6[7] = (char)(uVar2 >> (bVar8 & 0x3f));
    puVar6[0xe] = (char)(uVar3 >> (bVar8 & 0x3f));
    bVar5 = bVar8 & 0x3f;
    bVar8 = bVar8 + 8;
    puVar6[0x15] = (char)(uVar4 >> bVar5);
    puVar6 = puVar7;
  } while (puVar7 != local_31);
  FUN_004b8810(local_38,0x1c,param_1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

