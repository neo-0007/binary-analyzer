
void FUN_0041b170(undefined8 *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = DAT_0093fcb0;
  if ((param_1 < DAT_0093fcc0) || (DAT_0093fcc0 + DAT_0093fcc8 <= param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_00418e30("assertion failed: WITHIN_FREELIST(list)","../crypto/mem_sec.c",0x165);
  }
  if ((DAT_0093fcb0 <= param_2) &&
     (puVar3 = (ulong *)(DAT_0093fcb8 + (long)DAT_0093fcb0), param_2 < puVar3)) {
    puVar1 = (ulong *)*param_1;
    *param_2 = (ulong)puVar1;
    if (puVar1 == (ulong *)0x0) {
      param_2[1] = (ulong)param_1;
      *param_1 = param_2;
      return;
    }
    if ((puVar1 < puVar3) && (puVar2 <= puVar1)) {
      param_2[1] = (ulong)param_1;
      if ((undefined8 *)puVar1[1] == param_1) {
        puVar1[1] = (ulong)param_2;
        *param_1 = param_2;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: (char **)temp->next->p_next == list","../crypto/mem_sec.c",
                   0x16e);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00418e30("assertion failed: temp->next == NULL || WITHIN_ARENA(temp->next)",
                 "../crypto/mem_sec.c",0x16a);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00418e30("assertion failed: WITHIN_ARENA(ptr)","../crypto/mem_sec.c",0x166);
}

