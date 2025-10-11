
/* std::collate<wchar_t>::transform(wchar_t const*, wchar_t const*) const */

wchar_t * std::collate<wchar_t>::transform(wchar_t *param_1,wchar_t *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_2 + 0x18))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

