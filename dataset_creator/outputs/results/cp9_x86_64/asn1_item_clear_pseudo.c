
void asn1_item_clear(undefined8 *param_1,undefined1 *param_2)

{
  ulong *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    switch(*param_2) {
    case 0:
      puVar1 = *(ulong **)(param_2 + 0x10);
      if (puVar1 == (ulong *)0x0) goto switchD_004a43eb_caseD_5;
      if ((*puVar1 & 0x306) != 0) goto switchD_004a43eb_caseD_1;
      param_2 = (undefined1 *)(*(code *)puVar1[4])();
      break;
    default:
      goto switchD_004a43eb_caseD_3;
    case 4:
      if ((*(long *)(param_2 + 0x20) != 0) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x18),
         UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004a4436. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    case 1:
    case 2:
    case 6:
switchD_004a43eb_caseD_1:
      *param_1 = 0;
switchD_004a43eb_caseD_3:
      return;
    case 5:
switchD_004a43eb_caseD_5:
      asn1_primitive_clear();
      return;
    }
  } while( true );
}

