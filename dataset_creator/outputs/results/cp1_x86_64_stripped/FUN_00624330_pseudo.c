
void FUN_00624330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_006b8a00();
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00624371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
              (*(long **)(param_1 + 0x10),param_2,param_3,param_4);
    return;
  }
  return;
}

