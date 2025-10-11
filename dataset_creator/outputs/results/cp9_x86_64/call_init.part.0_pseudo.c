
void call_init_part_0(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  
  bVar2 = *(byte *)((long)param_1 + 0x31c);
  pcVar6 = (char *)param_1[1];
  *(byte *)((long)param_1 + 0x31c) = bVar2 | 8;
  if (*pcVar6 == '\0') {
    if ((bVar2 & 3) == 0) {
      return;
    }
    if (((byte)_dl_debug_mask & 2) == 0) goto LAB_007a91cd;
    pcVar6 = *(char **)_dl_argv;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = "<main program>";
    }
  }
  else if (((byte)_dl_debug_mask & 2) == 0) goto LAB_007a91cd;
  _dl_debug_printf("\ncalling init: %s\n\n",pcVar6);
LAB_007a91cd:
  if (param_1[0x14] != 0) {
    (*(code *)(*(long *)(param_1[0x14] + 8) + *param_1))(param_2,param_3,param_4);
  }
  if (param_1[0x21] != 0) {
    puVar3 = (undefined8 *)(*param_1 + *(long *)(param_1[0x21] + 8));
    iVar4 = (int)(*(ulong *)(param_1[0x23] + 8) >> 3);
    if (iVar4 != 0) {
      puVar1 = puVar3 + 1;
      for (puVar5 = puVar1; (*(code *)*puVar3)(param_2,param_3,param_4),
          puVar1 + (iVar4 - 1) != puVar5; puVar5 = puVar5 + 1) {
        puVar3 = puVar5;
      }
    }
  }
  return;
}

