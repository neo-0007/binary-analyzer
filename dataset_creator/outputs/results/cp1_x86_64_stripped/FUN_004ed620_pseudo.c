
void FUN_004ed620(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  LOCK();
  plVar1 = param_1 + 7;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if (((int)lVar3 != 1) && (0 < (int)lVar3 + -1)) {
    return;
  }
  if ((*param_1 != 0) && (pcVar2 = *(code **)(*param_1 + 0x18), pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1);
  }
  FUN_0051a270(param_1[1]);
  if (((long *)param_1[3] != (long *)0x0) &&
     (pcVar2 = *(code **)(*(long *)param_1[3] + 0x168), pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1);
  }
  FUN_00419990(8,param_1,param_1 + 8);
  FUN_00422300(param_1[10]);
  FUN_004efd00(param_1[3]);
  FUN_004efcc0(param_1[4]);
  FUN_004b7f20(param_1[5]);
  FUN_0041ad60(param_1[0xc],"../crypto/ec/ec_key.c",100);
  FUN_0041aef0(param_1,0x70,"../crypto/ec/ec_key.c",0x66);
  return;
}

