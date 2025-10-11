
void FUN_0068fdb0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)((long)param_1 + *(long *)(*param_2 + -0x18));
  *param_1 = *param_2;
  *plVar2 = param_2[1];
  lVar3 = (long)param_3 + *(long *)(*param_3 + -0x18);
  FUN_006703b0(plVar2,lVar3);
  FUN_0066f990(plVar2,plVar2 + 0x1a);
  lVar1 = *(long *)(lVar3 + 0xd8);
  plVar2[0x1d] = 0;
  *(undefined8 *)(lVar3 + 0xd8) = 0;
  plVar2[0x1b] = lVar1;
  *(undefined4 *)(plVar2 + 0x1c) = *(undefined4 *)(lVar3 + 0xe0);
  *(undefined1 *)((long)plVar2 + 0xe4) = *(undefined1 *)(lVar3 + 0xe4);
  return;
}

