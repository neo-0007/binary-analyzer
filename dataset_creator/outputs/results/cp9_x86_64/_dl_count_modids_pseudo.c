
long _dl_count_modids(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = _dl_tls_max_dtv_idx;
  if ((_dl_tls_dtv_gaps != '\0') &&
     (lVar3 = 0, plVar2 = _dl_tls_dtv_slotinfo_list, _dl_tls_dtv_slotinfo_list != (long *)0x0)) {
    do {
      lVar1 = 0;
      if (*plVar2 != 0) {
        do {
          lVar3 = (lVar3 + 1) - (ulong)(plVar2[lVar1 * 2 + 3] == 0);
          lVar1 = lVar1 + 1;
        } while (lVar1 != *plVar2);
      }
      plVar2 = (long *)plVar2[1];
    } while (plVar2 != (long *)0x0);
  }
  return lVar3;
}

