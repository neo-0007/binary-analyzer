
void FUN_007a27e0(undefined8 *param_1,int param_2)

{
  long in_FS_OFFSET;
  
  *(undefined8 *)(in_FS_OFFSET + 0x2f8) = param_1[3];
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007a27ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_1[1]);
    return;
  }
  return;
}

