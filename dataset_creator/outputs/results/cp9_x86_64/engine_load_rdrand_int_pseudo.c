
void engine_load_rdrand_int(void)

{
  int iVar1;
  ENGINE *e;
  
  if ((DAT_0093e59c._3_1_ & 0x40) == 0) {
    return;
  }
  e = ENGINE_new();
  if (e != (ENGINE *)0x0) {
    iVar1 = ENGINE_set_id(e,"rdrand");
    if (iVar1 != 0) {
      iVar1 = ENGINE_set_name(e,"Intel RDRAND engine");
      if (iVar1 != 0) {
        iVar1 = ENGINE_set_flags(e,8);
        if (iVar1 != 0) {
          iVar1 = ENGINE_set_init_function(e,rdrand_init);
          if (iVar1 != 0) {
            iVar1 = ENGINE_set_RAND(e,(RAND_METHOD *)rdrand_meth);
            if (iVar1 != 0) {
              ERR_set_mark();
              ENGINE_add(e);
              ENGINE_free(e);
              ERR_pop_to_mark();
              return;
            }
          }
        }
      }
    }
    ENGINE_free(e);
    return;
  }
  return;
}

