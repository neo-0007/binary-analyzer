
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DSA_METHOD * DSA_get_default_method(void)

{
  return (DSA_METHOD *)default_DSA_method;
}

