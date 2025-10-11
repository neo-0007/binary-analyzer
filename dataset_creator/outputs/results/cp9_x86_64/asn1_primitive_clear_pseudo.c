
void asn1_primitive_clear(undefined8 *param_1,char *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 != (char *)0x0) {
    if (*(long *)(param_2 + 0x20) == 0) {
      if ((*param_2 != '\x05') && (*(int *)(param_2 + 8) == 1)) {
        *(int *)param_1 = (int)*(undefined8 *)(param_2 + 0x28);
        return;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x20);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004a43a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}

