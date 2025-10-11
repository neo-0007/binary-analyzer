
long _nl_select_era_entry(int param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x28);
  if (plVar1 == (long *)0x0) {
    if (*(int *)(param_2 + 0x1d0) == 0) {
      return 0;
    }
  }
  else if (((int)plVar1[2] != 0) || (*(int *)(param_2 + 0x1d0) == 0)) goto LAB_0075e94f;
  _nl_init_era_entries_part_0(param_2);
  plVar1 = *(long **)(param_2 + 0x28);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
LAB_0075e94f:
  return *plVar1 + (long)param_1 * 0x48;
}

