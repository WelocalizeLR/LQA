vuser_init()
{
	rlr_start_transaction("");
eturn 1;

	lr_end_transaction_instance(111, 123);

	return 0;
}
