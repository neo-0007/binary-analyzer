
undefined * FUN_00785b70(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((DAT_0093eb28 != 0) && (puVar2 = PTR_DAT_0093eb60, PTR_DAT_0093eb60 != (undefined *)0x0)) {
    do {
      if ((*(ulong *)(puVar2 + 0x358) <= param_1) && (param_1 < *(ulong *)(puVar2 + 0x360))) {
        if ((puVar2[0x31e] & 4) != 0) {
LAB_00785be0:
          if (*(long *)(puVar2 + 0x30) == 0) {
            return puVar2;
          }
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("ns == l->l_ns","dl-open.c",0xe0,"_dl_find_dso_for_object");
        }
        iVar1 = FUN_0078d990(puVar2,param_1);
        if (iVar1 != 0) goto LAB_00785be0;
      }
      puVar2 = *(undefined **)(puVar2 + 0x18);
    } while (puVar2 != (undefined *)0x0);
  }
  return (undefined *)0x0;
}

