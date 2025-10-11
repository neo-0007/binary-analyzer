
void FUN_00423440(long param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(long *)(param_1 + 8) + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_004a06b0();
  }
  FUN_0041ad60(param_1,"../crypto/objects/obj_dat.c",0x96);
  return;
}

