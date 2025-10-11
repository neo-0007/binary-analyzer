
void FUN_006c4500(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_006e0cc0(0x40);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403a6e("locale::facet::_S_create_c_locale name not valid");
}

