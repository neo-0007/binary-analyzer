
undefined * _dl_find_dso_for_object(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((_dl_nns != 0) && (puVar2 = _dl_ns, _dl_ns != (undefined *)0x0)) {
    do {
      if ((*(ulong *)(puVar2 + 0x358) <= param_1) && (param_1 < *(ulong *)(puVar2 + 0x360))) {
        if ((puVar2[0x31e] & 4) != 0) {
LAB_0077c2b0:
          if (*(long *)(puVar2 + 0x30) == 0) {
            return puVar2;
          }
                    /* WARNING: Subroutine does not return */
          __assert_fail("ns == l->l_ns","dl-open.c",0xe0,"_dl_find_dso_for_object");
        }
        iVar1 = _dl_addr_inside_object(puVar2,param_1);
        if (iVar1 != 0) goto LAB_0077c2b0;
      }
      puVar2 = *(undefined **)(puVar2 + 0x18);
    } while (puVar2 != (undefined *)0x0);
  }
  return (undefined *)0x0;
}

