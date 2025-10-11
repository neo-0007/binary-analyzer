
void ui_method_data_index_init_ossl_(void)

{
  ui_method_data_index =
       CRYPTO_get_ex_new_index
                 (0xe,0,(void *)0x0,ui_new_method_data,ui_dup_method_data,ui_free_method_data);
  ui_method_data_index_init_ossl_ret_ = 1;
  return;
}

