
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong ERR_peek_last_error(void)

{
  ulong uVar1;
  
  uVar1 = get_error_values(2,0,0,0,0,0);
  return uVar1;
}

