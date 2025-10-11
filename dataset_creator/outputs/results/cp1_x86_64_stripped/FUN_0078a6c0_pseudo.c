
void FUN_0078a6c0(ulong param_1,char param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  uVar3 = *(ulong *)(param_1 + 0x460);
  puVar1 = DAT_00945878;
  do {
    puVar4 = puVar1;
    puVar1 = puVar4;
    if (uVar3 < *puVar4) goto LAB_0078a700;
    uVar3 = uVar3 - *puVar4;
    puVar1 = (ulong *)puVar4[1];
  } while ((ulong *)puVar4[1] != (ulong *)0x0);
  if (uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("idx == 0","../elf/dl-tls.c",0x412,"_dl_add_to_slotinfo");
  }
  puVar1 = (ulong *)FUN_007101b0(0x3f0);
  if (puVar1 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0078db10(0xc,"dlopen",0,"cannot create TLS data structures");
  }
  *puVar1 = 0x3e;
  puVar1[1] = 0;
  puVar5 = puVar1 + 2;
  for (lVar2 = 0x7c; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
  }
  puVar4[1] = (ulong)puVar1;
LAB_0078a700:
  if (param_2 != '\0') {
    puVar1[(uVar3 + 1) * 2 + 1] = param_1;
    puVar1[(uVar3 + 1) * 2] = DAT_00945840 + 1;
    return;
  }
  return;
}

