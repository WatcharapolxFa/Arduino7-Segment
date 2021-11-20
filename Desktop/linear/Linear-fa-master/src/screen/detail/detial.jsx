import React from 'react'
import { useParams } from 'react-router'

import CardFlip from '../../components/card-flip'

function Detail() {
    const { id } = useParams()
    return (
        <>
            <div className="container bd-black-top">
                <h3 className="text-home">การวิเคราะห์ทิศทางการเติบโตของสินค้าทางการเกษตรในประเทศไทย</h3>
            </div>
            <br />
            <div className="container bd-black">
                <br />
                <div className="main1">
                    <CardFlip />
                    <CardFlip />
                    <CardFlip />
                </div>
            </div>
        </>
    )
}

export default Detail
