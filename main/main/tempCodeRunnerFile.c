int mobiles;
    scanf("%d", &mobiles);
    int price_and_quality[mobiles][2];
    for(int i=0; i < mobiles; i++)
        for(int j=0; j < 2; j++)
            scanf("%d", &price_and_quality[i][j]);

    int expense = price_and_quality[0][0];
    for(int i=0; i < mobiles - 1; i++)
        if (price_and_quality[i+1][0] > price_and_quality[i][0])
            expense = price_and_quality[i+1][0];

    int low_q = price_and_quality[0][1];
    for(int i=0; i < mobiles - 1; i++)
        if (price_and_quality[i+1][1] < price_and_quality[i][1])
            low_q = price_and_quality[i+1][1];

    int good=0;
    for(int i=0; i < mobiles; i++)
        if ((price_and_quality[i][0] <= expense) && (price_and_quality[i][1] >= low_q))
            if (price_and_quality[i][0] != expense || price_and_quality[i][1] != low_q)
                good++;