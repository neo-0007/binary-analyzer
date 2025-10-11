
void _dl_init(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  int iVar8;
  
  lVar5 = param_1[0x28];
  lVar3 = param_1[0x29];
  if (_dl_initfirst != 0) {
    bVar2 = *(byte *)(*(long *)(_dl_initfirst + 0x28) + 0x31c);
    if (((bVar2 & 4) == 0) && ((bVar2 & 3) != 0)) {
LAB_007a93ed:
                    /* WARNING: Subroutine does not return */
      __assert_fail("l->l_real->l_relocated || l->l_real->l_type == lt_executable","dl-init.c",0x1f,
                    "call_init");
    }
    if ((*(byte *)(_dl_initfirst + 0x31c) & 8) == 0) {
      call_init_part_0(_dl_initfirst,param_2,param_3,param_4);
    }
    _dl_initfirst = 0;
  }
  if (((lVar5 != 0) && (lVar3 != 0)) && (iVar8 = (int)(*(ulong *)(lVar3 + 8) >> 3), iVar8 != 0)) {
    if (((byte)_dl_debug_mask & 2) != 0) {
      pcVar7 = (char *)param_1[1];
      if ((*pcVar7 == '\0') && (pcVar7 = *(char **)_dl_argv, pcVar7 == (char *)0x0)) {
        pcVar7 = "<main program>";
      }
      _dl_debug_printf("\ncalling preinit: %s\n\n",pcVar7);
    }
    puVar4 = (undefined8 *)(*param_1 + *(long *)(lVar5 + 8));
    puVar1 = puVar4 + 1;
    for (puVar6 = puVar1; (*(code *)*puVar4)(param_2,param_3,param_4),
        puVar1 + (iVar8 - 1) != puVar6; puVar6 = puVar6 + 1) {
      puVar4 = puVar6;
    }
  }
  if ((int)param_1[0x59] != 0) {
    lVar5 = (ulong)((int)param_1[0x59] - 1) << 3;
    do {
      lVar3 = *(long *)(param_1[0x7a] + lVar5);
      bVar2 = *(byte *)(*(long *)(lVar3 + 0x28) + 0x31c);
      if (((bVar2 & 4) == 0) && ((bVar2 & 3) != 0)) goto LAB_007a93ed;
      if ((*(byte *)(lVar3 + 0x31c) & 8) == 0) {
        call_init_part_0(lVar3,param_2,param_3,param_4);
      }
      lVar5 = lVar5 + -8;
    } while (lVar5 != -8);
  }
  return;
}

