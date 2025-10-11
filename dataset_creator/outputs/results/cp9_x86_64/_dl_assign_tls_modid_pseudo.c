
void _dl_assign_tls_modid(ulong param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if (_dl_tls_dtv_gaps != '\0') {
    uVar3 = _dl_tls_static_nelem + 1;
    if (uVar3 <= _dl_tls_max_dtv_idx) {
      uVar5 = *_dl_tls_dtv_slotinfo_list;
      lVar4 = 0;
      puVar2 = _dl_tls_dtv_slotinfo_list;
      while( true ) {
        while (uVar3 - lVar4 < uVar5) {
          lVar1 = (uVar3 - lVar4) + 1;
          if (puVar2[lVar1 * 2 + 1] == 0) {
            puVar2[lVar1 * 2 + 1] = param_1;
            goto LAB_0078057a;
          }
          uVar3 = uVar3 + 1;
          if (_dl_tls_max_dtv_idx + 1 < uVar3) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("result <= GL(dl_tls_max_dtv_idx) + 1","../elf/dl-tls.c",0x9c,
                          "_dl_assign_tls_modid");
          }
        }
        puVar2 = (ulong *)puVar2[1];
        lVar4 = lVar4 + uVar5;
        if (puVar2 == (ulong *)0x0) break;
        uVar5 = *puVar2;
      }
LAB_0078057a:
      if (uVar3 <= _dl_tls_max_dtv_idx) goto LAB_007804d3;
    }
    if (_dl_tls_max_dtv_idx + 1 != uVar3) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("result == GL(dl_tls_max_dtv_idx) + 1","../elf/dl-tls.c",0xae,
                    "_dl_assign_tls_modid");
    }
    _dl_tls_dtv_gaps = '\0';
  }
  uVar3 = _dl_tls_max_dtv_idx + 1;
  _dl_tls_max_dtv_idx = uVar3;
LAB_007804d3:
  *(ulong *)(param_1 + 0x460) = uVar3;
  return;
}

