
void FUN_0078db10(undefined4 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  
  puVar1 = *(undefined8 **)(in_FS_OFFSET + -8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00784320(*puVar1);
    *(undefined4 *)puVar1[1] = param_1;
    FUN_00790a50(puVar1 + 2,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0078da10();
}

