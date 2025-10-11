
void FUN_006adb50(long *param_1)

{
  if (*(code **)(*param_1 + 0x28) == (code *)&LAB_006adb40) {
    FUN_006ad090();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006adb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}

