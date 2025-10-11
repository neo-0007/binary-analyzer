
void FUN_006c4580(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_006e1aa0();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403a6e("locale::facet::_S_lc_ctype_c_locale duplocale error");
  }
  lVar2 = FUN_006e0cc0(1,param_2,lVar1);
  if (lVar2 != 0) {
    return;
  }
  FUN_006e1cc0(lVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00403a6e("locale::facet::_S_lc_ctype_c_locale newlocale error");
}

