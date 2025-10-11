
void FUN_0078dac0(undefined4 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  
  plVar1 = *(long **)(in_FS_OFFSET + -8);
  if (plVar1 != (long *)0x0) {
    puVar2 = (undefined8 *)*plVar1;
    uVar3 = param_2[1];
    *puVar2 = *param_2;
    puVar2[1] = uVar3;
    puVar2[2] = param_2[2];
    *(undefined4 *)plVar1[1] = param_1;
    FUN_00790a50(plVar1 + 2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0078da10();
}

