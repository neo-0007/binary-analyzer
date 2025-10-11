
undefined8 FUN_004ab560(long param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x58);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar3 != 1) && (0 < iVar3 + -1)) {
    return 1;
  }
  if (((*(long *)(param_1 + 0x10) != 0) || (*(long *)(param_1 + 0x18) != 0)) &&
     (iVar3 = FUN_004aaf30(param_1,1,0,0,0,0), iVar3 < 1)) {
    return 0;
  }
  if ((*(long *)(param_1 + 8) != 0) &&
     (pcVar2 = *(code **)(*(long *)(param_1 + 8) + 0x50), pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1);
  }
  FUN_00419990(0xc,param_1,param_1 + 0x70);
  FUN_00422300(*(undefined8 *)(param_1 + 0x80));
  FUN_0041ad60(param_1,"../crypto/bio/bio_lib.c",0x99);
  return 1;
}

